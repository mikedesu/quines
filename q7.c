char s[]="char s[]=@;p(int c){putchar(c);}main(){for(char *c=s;*c;c++){if(*c!=64&&*c!=59){p(*c);}else if(*c==59){p(59);p(10);}else if(*c==64){p(34);for(char *q=s;*q;q++){p(*q);}p(34);}}}";

p(int c){putchar(c);}

main(){
    for(char *c=s;*c;c++){
        if(*c!=64&&*c!=59){
            p(*c);
        }else if(*c==59){
            p(59);
            p(10);
        }else if(*c==64){
            p(34);
            for(char *q=s;*q;q++){
                p(*q);
            }
            p(34);
        }
    }
}
