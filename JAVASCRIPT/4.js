//4. Write a function to check whether a given character is a vowel or consonant.
function characteris(char,vowel){
    var vowels=["a","e","i","o","u","A","E","I","O","U"];
    for(i=0;i<vowels.length;i++){
        if(char==vowels[i]){
            vowel++;
        }
    }
    if(vowel>0){
        console.log("vowel");
    }
    else{
        console.log("consonant");
    }
}
characteris("A",0);
