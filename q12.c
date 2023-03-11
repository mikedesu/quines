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
    int threshold=16;

    for(char *p=s;*p;p++){
        char c=*p;
        // if c is not @
        if(c!=64){
            if(ct>=threshold){
                // check the character
                // if it is [';', ' ', '(', ')', '{', '}']
                //if(c==59||c==32||c==40) {

                int res=(c==32||c==40||c==41||c==59||c==123||c==125);

                //if(c==32||c==40||c==41||c==59||c==123||c==125) {
                if(res) {
                    // print it and nl
                    a(c);
                    nl();
                    // reset character count
                    ct=0;
                }
                //else if(c!=59&&c!=32&&c!=40){
                //else if(c!=32&&c!=40&&c!=41&&c!=59&&c!=123&&c!=125){
                else{
                    a(c);
                    ct++;
                }
            }
            else{
                a(c);
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
    }
}

