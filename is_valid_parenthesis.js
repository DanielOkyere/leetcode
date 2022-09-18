#!/usr/bin/env node
/**
 * check for valid parenthesis
 */
function is_valid(combination){
    stack = [];
    comb_arr = combination.split('');
    for(let i = 0; i < comb_arr.length; i++){
	if (comb_arr[i] === '(')
	    stack.push(comb_arr[i]);
	else
	{
	    if (!stack.length)
		return false;
	    else
		stack.pop();
	}
    }
    if (stack.length == 0)
	return true;
    else
	return false;
}


console.log(is_valid('()()()'));
console.log(is_valid('((())'));
