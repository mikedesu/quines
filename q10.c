a(int c){putchar(c);}
nl(){a(10);}
sp(){a(32);}
q(){a(34);}
tab(int n){
    for(int i=0;i<n;i++)sp();
}

main(){
    int is_first_nl = 1;
    int sp_ct_begin = 20;
    int sp_ct = 0;
    for(char *p=s;*p;p++) {
        char c=*p;
        if (c!=64) {
            if (c==41) {
                a(c);
                tab(sp_ct_begin-sp_ct);
            }
            else if (c==59) {
                a(c);
                if (is_first_nl) {
                    nl();
                    is_first_nl = 0;
                    sp_ct = 0;
                }
            }
            else if (c==123) {
                a(c);
                nl();
                sp_ct=0;
            }
            else if (c==125) {
                a(c);
                nl();
                sp_ct=0;
            }
            else if (c!=41&&c!=59&&c!=123&&c!=125) {
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

