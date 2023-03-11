p(int c){
    putchar(c);
}

// prints " ; "
f(){
    p(10);
    p(59);
    p(10);
}

main(){
    for(char *c=s;*c;c++){
        // if the character is not @ and is not ;
        if(*c!=64&&*c!=59)
            // just print the character
            p(*c);
        // if the character is ;
        else if(*c==59){
            // print a space before ; and after
            f();
        }
        // if the character is @
        else if(*c==64){
            // print literal "
            p(34);
            // process the @ symbol for each character in s
            for(char *q=s;*q;q++){
                // just print the character
                p(*q);
            }
            // print literal "
            p(34);
        }
    }
}
