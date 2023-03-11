// 2023-02-23

// q19.c

// This is a 2-column quine that additionally prints out the current time, although in an inconvenient format
// The time is printed out in the form of 4 bytes, each byte is printed out as a 3-digit number
// This quine was also written with the help of Github copilot
// The time is printed at the beginning as a comment
// Also, the width of the two columns is randomized

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

mytime() {
    // to make this truly work as a quine, 
    // the printed time needs to be a comment
    nl();
    nl();
    a('/');
    a('/');
    a(' ');
    int my_time=time(0);
    // since my_time is 32-bit, we can putchar each byte individually
    // this is a quine, so we can't use printf
    // some bytes may be unprintable characters

    int my_bytes[4] = {
        my_time & 255,
        (my_time >> 8) & 255,
        (my_time >> 16) & 255,
        (my_time >> 24) & 255
    };


    for (int j=3; j>=0; j--) {
        for(int i=2; i >= 0; i--) {
            if (my_bytes[j] / 100 == i) {
                a('0'+i);
                my_bytes[j] -= 100 * i;
                break;
            }
        }

        for(int i=9; i >= 0; i--) {
            if (my_bytes[j] / 10 == i) {
                a('0'+i);
                my_bytes[j] -= 10 * i;
                break;
            }
        }

        for(int i=9; i >= 0; i--) {
            if (my_bytes[j] == i) {
                a('0'+i);
                my_bytes[j] -= i;
                break;
            }
        }

        if ( j > 0 )
            a(':');
    }
    nl();
}





main(){

    // 1. we need a character counter
    int ct=0;
    // 2. we need a column length threshold
    srand(time(0));
    int padding=16;
    int threshold=padding;

    // in this quine, we introduce double-character processing
    // we can keep track of the previous character by storing it
    // here we declare a new var, pc, to hold the char when we get to it
    char pc=0;

    // in this quine 14, we introduce an attempt at double-column
    // to achieve this, we will keep track of a 2nd variable
    int tabbed=0;
    int column_count=3;
    
    mytime();   

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

                    if(tabbed < column_count-1){
                        int space_count=16-(ct-threshold);
                        tab(space_count);
                        tabbed++;
                    }
                    else{
                        // print it and nl
                        nl();
                        // increase the threshold
                        //threshold=threshold+1;
                        //threshold=random()%padding+padding;
                        tabbed=0;
                    }
                    // reset character count
                    ct=0;
                }
                else{
                    // in order to track overflow we continue counting
                    ct++;
                }
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

