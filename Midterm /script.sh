#Midterm Shell script
PROGRAM="Midterm";
P1="Problem1";
P2="Problem2";
P3="Problem3";
gcc -c ${PROGRAM}.s;
gcc -c ${P1}.s;
gcc -c ${P2}.s;
gcc -c ${P3}.s;
gcc -o ${PROGRAM} ${P1}.o ${P2}.o ${P3}.o ${PROGRAM}.o;
#gcc -o ${PROGRAM} ${PROGRAM}.o;
echo "Compiling $PROGRAM..";
rm -vf *.o
echo "\nHello $USER, we are going to run the ${PROGRAM}";
echo "Today is $(date)";
echo "Current working directory : $(pwd)";
echo 
./${PROGRAM};
