function spinWords(word_string){
    return word_string.split(' ').map( word => word.length<5 ? word : word.split('').reverse().join('') ).join(' ');
  }