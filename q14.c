// ok, now we are ready to work towards a 2-column quine
// here's how...
//
// 1. we need a character counter

a(int c){
    putchar(c);
}

// print a newline
nl(){
    a(10);
}

// print a space
sp(){
    a(32);
}

// print "
q(){
    a(34);
}

tab(int n){
    for(int i=0;i<n;i++){
        sp();
    }
}

main(){

    int ct=0;
    int threshold=15;

    // in this quine, we introduce double-character processing
    // we can keep track of the previous character by storing it
    // here we declare a new var, pc, to hold the char when we get to it
    char pc=0;

    // in this quine 14, we introduce an attempt at double-column
    // to achieve this, we will keep track of a 2nd variable
    int tabbed=0;

    for(char *p=s;*p;p++){
        char c=*p;
        // if c is not @
        if(c!=64){
            a(c);
            if(ct>=threshold){
                // check the character
                // if it is [';', ' ', '(', ')', '{', '}']
                //if(c==59||c==32||c==40) {

                int res0=(c==32||c==40||c==41||c==59||c==123||c==125);
                int res1=(pc==124&&c==124);
                int res2=(pc==61&&c==61);

                if(res0||res1||res2){

                    if(!tabbed){

                        tab(16);
                        tabbed=1;
                    }
                    else{
                        // print it and nl
                        nl();
                        tabbed=0;
                    }
                    // reset character count
                    ct=0;
                }
                //else{
                //    ct++;
                //}
            }
            else{
                ct++;
            }
        }
        else if(c==64){
            q();
            printf(s);
            q();
            a(59);
            nl();
            nl();
            nl();
            ct=0;
        }

        // copy the current character into the previous character variable
        pc=c;
    }
}

