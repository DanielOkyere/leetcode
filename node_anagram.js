#!/usr/bin/env node
/**
 * node implementation of anagram
 */
function check_anagram(str1, str2){
    arr1 = str1.split('').sort().join('');
    console.log(arr1);
    
    arr2 = str2.split('').sort().join('');
    console.log(arr2);
    
    if (str1.localeCompare(str2)){
	console.log('true');
	return true;
    }
    else{
	console.log('false');
	return false;
    }
}

check_anagram('danger','garden');
