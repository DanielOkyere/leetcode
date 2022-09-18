#!/usr/bin/env node
/**
 * gas station problem implementation
 * JS
 */
function gas_station(gas, cost){
    let rem_gas = 0;
    let p_rem = 0;
    let candidate = 0;

    for (let i = 0; i < gas.length; i++)
    {
	rem_gas += gas[i] - cost[i];
	if (rem_gas < 0){
	    candidate = i + 1;
	    p_rem += rem_gas;
	    rem_gas = 0;
	}
    }
    if ((gas.length ===  candidate) || (rem_gas + p_rem < 0))
	return -1;
    else
	return candidate;
}

let gas = [1,3,4,5,4,6,7];
let cost = [2,3,4,5,6,7,7];
console.log(gas_station(gas, cost));
gas = [1, 5,3,3,5,3,1,3,4,5];
cost = [5,2,2,8,2,4,2,5,1,2];
console.log(gas_station(gas, cost));
