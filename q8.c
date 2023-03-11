char s[]="char s[]=@;main(){}";

a(int c){putchar(c);}
n(){a(10);}
sp(){a(32);}
q(){a(34);}

main(){
    for(char *p=s;*p;p++) {
        char c=*p;
        if (c!=64) {
            a(c);
        } 
        else if (c==64) {
            q();
            for (char *q=s;*q;q++) {
                char d=*q;
                a(d);
            }
            q();
        }
    }
}


