int convertHelp(int num){
    if(num==0)
    return 0;
    int digit=num%10;
    if(digit==0)
    digit=5;
    return convertHelp(num/10)*10+digit;
}
int con0to5(int num){
    if(num==0)
    return 5;
    else return convertHelp(num);
}