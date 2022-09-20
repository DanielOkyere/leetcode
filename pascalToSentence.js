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
  

  /**
   * reversepascalToString - Reverses a  pascal case string
   * @param {String} text - Stirng to be reversed
   * @returns String
   */
  function reversepascalToString(text){
    let arr = text.split('');
    let result = '';
    for (let i = arr.length - 1; i >= 0 ; i--)
     {
       result += (arr[i].toUpperCase() === arr[i] && i > 0) ? arr[i].toLowerCase() + ' ' : arr[i];
     }
     return result;
   }
   
   console.log(reversepascalToString("WelcomeToBuwelo"));