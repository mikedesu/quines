infile=$1;
outfile=$2;
# one line the original program
# removes leading whitespace
# removes comments leading with //
# removes newlines
sed "s|^[[:space:]]*||" $1 | sed "s|^//.*$||"  |  tr -d "\n" > $infile.tmp;
# program string beginning
#echo -n 'char s[]="char s[]=@;' >> $infile.tmp.2;
echo -n 'char s[]="char s[]=@' >> $infile.tmp.2;
# append the program string
cat $infile.tmp >> $infile.tmp.2;
# end the string
echo '";' >> $infile.tmp.2;
# cat the rest of the program
cat $infile.tmp >> $infile.tmp.2;
# cleanup
mv $infile.tmp.2 $outfile;
rm $infile.tmp;
# compile
gcc $outfile 1>/dev/null 2>/dev/null;
# check result of compile
if [ $? -ne 0 ]; then
    echo "An error occured";
else
    echo "Success!";
fi

