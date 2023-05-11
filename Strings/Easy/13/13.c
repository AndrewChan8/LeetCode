int romanToInt(char * s){
    int roman[26] = {};
    roman['I' - 'A'] = 1;
    roman['V' - 'A'] = 5;
    roman['X' - 'A'] = 10;
    roman['L' - 'A'] = 50;
    roman['C' - 'A'] = 100;
    roman['D' - 'A'] = 500;
    roman['M' - 'A'] = 1000;
    int sum = 0;
    int prev = 0;
    while(*s != '\0'){
        sum += roman[*s - 'A'];
        if (roman[*s - 'A'] > prev){
            sum -= 2 * prev;
        }
        prev = roman[*s - 'A'];
        s++;
    }
    return sum;
}