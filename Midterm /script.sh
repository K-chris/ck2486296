#Midterm Shell script
PROGRAM="Midterm";
P1="Problem1";
P2="Problem2";
P3="Problem3";
as -o ${PROGRAM}.o ${PROGRAM}.s;
as -o ${P1}.o ${P1}.s;
as -o ${P2}.o ${P2}.s;
as -o ${P3}.o ${P3}.s;
gcc -o ${PROGRAM} ${P1}.o ${P2}.o ${P3}.o ${PROGRAM}.o;
#gcc -o ${PROGRAM} ${PROGRAM}.o;
echo "Compiling $PROGRAM..";
rm -vf *.o
echo "\nHello $USER, we are going to run the ${PROGRAM}";
echo "Today is $(date)";
echo "Current working directory : $(pwd)";
echo 
./${PROGRAM};
