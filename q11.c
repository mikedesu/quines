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
    for(int i=0;i<n;i++) {
        sp();
    }
}

main(){
    int is_first_nl = 1;
    int sp_ct_begin = 20;
    int sp_ct = 0;
    for(char *p=s;*p;p++) {
        char c=*p;

        // if c is not @
        if (c!=64) {
            // if c is ;
            if (c==59) {
                a(c);
            }
            // if c is {
            else if (c==123) {
                a(c);
                //nl();
                sp_ct=0;
            }
            // if c is }
            else if (c==125) {
                a(c);
                //nl();
                sp_ct=0;
            }
            // for some reason we have to also make sure 
            // that c is not any of the previous values
            else if (c!=59&&c!=123&&c!=125) {
                a(c);
            }
            sp_ct++;
        } 
        else if (c==64) {
            q();
            printf(s);
            q();
        }
    }
}

