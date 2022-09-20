#!/usr/bin/env node

/**
 * PascalToSentence - converts the sentence to pascal
 * @param {String} text - text to convert 
 */
function pascalToSentence(text){
    arr = text.split('');
    result = '';
    for(let i = 0; i<arr.length; i++){
      result += arr[i].toUpperCase() === arr[i] && i > 0 ? ' ' + arr[i].toLowerCase(): arr[i];
    }
    console.log(result.trim());
  }
  
  pascalToSentence('WelcomeToAccra')
  