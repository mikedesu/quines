

// 099:249:026:215
char s[]="char s[]=@a(int c){putchar(c);}nl(){a(10);}sp(){a(32);}q(){a(34);}tab(int n){for(int i=0;i<n;i++){sp();}}mytime() {nl();nl();a('/');a('/');a(' ');int my_time=time(0);int my_bytes[4] = {my_time & 255,(my_time >> 8) & 255,(my_time >> 16) & 255,(my_time >> 24) & 255};for (int j=3; j>=0; j--) {for(int i=2; i >= 0; i--) {if (my_bytes[j] / 100 == i) {a('0'+i);my_bytes[j] -= 100 * i;break;}}for(int i=9; i >= 0; i--) {if (my_bytes[j] / 10 == i) {a('0'+i);my_bytes[j] -= 10 * i;break;}}for(int i=9; i >= 0; i--) {if (my_bytes[j] == i) {a('0'+i);my_bytes[j] -= i;break;}}if ( j > 0 )a(':');}nl();}main(){int ct=0;srand(time(0));int padding=16;int threshold=random()0x1adding+padding;char pc=0;int tabbed=0;int column_count=2;mytime();   for(char *p=s;*p;p++){char c=*p;if(c!=64){a(c);if(ct>=threshold){int res0=(c==32||c==40||c==41||c==59||c==123||c==125);int res1=(pc==124&&c==124);int res2=(pc==61&&c==61);if(res0||res1||res2){if(tabbed < column_count-1){int space_count=16-(ct-threshold);tab(space_count);tabbed++;}else{nl();tabbed=0;}ct=0;}else{ct++;}}else{ct++;}}else if(c==64){q();printf(s);q();a(59);nl();nl();nl();ct=0;}pc=c;}}";


a(int c){putchar(c);}nl(              ){a(10);}sp(){a(32);}q(
){a(34);}tab(int n){for(              int i=0;i<n;i++){sp();
}}mytime() {nl();nl();                a('/');a('/');a(' ');int 
my_time=time(0);int my_bytes[4]       = {my_time & 255,(my_time 
>> 8) & 255,(my_time >>               16) & 255,(my_time >> 
24) & 255};for (int j=3;               j>=0; j--) {for(int i=2;
 i >= 0; i--) {if (my_bytes[j]        / 100 == i) {a('0'+i);
my_bytes[j] -= 100 * i;               break;}}for(int i=9; i 
>= 0; i--) {if (my_bytes[j]           / 10 == i) {a('0'+i);my_bytes[j] 
-= 10 * i;break;}}for(                int i=9; i >= 0; i--) 
{if (my_bytes[j] == i)                 {a('0'+i);my_bytes[j] 
-= i;break;}}if ( j >                 0 )a(':');}nl();}main(
){int ct=0;srand(time(                0));int padding=16;int 
threshold=random()%padding+padding;   char pc=0;int tabbed=0;
int column_count=2;mytime(            );   for(char *p=s;*p;
p++){char c=*p;if(c!=64)              {a(c);if(ct>=threshold)
{int res0=(c==32||c==40||             c==41||c==59||c==123||
c==125);int res1=(pc==                124&&c==124);int res2=(
pc==61&&c==61);if(res0||              res1||res2){if(tabbed 
< column_count-1){int                 space_count=16-(ct-threshold)
;tab(space_count);tabbed++;           }else{nl();tabbed=0;}ct=0;
}else{ct++;}}else{ct++;               }}else if(c==64){q();printf(
s);q();a(59);nl();nl()                ;nl();ct=0;}pc=c;}}