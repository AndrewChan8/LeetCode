// int addDigits(int num){
//     while(num > 9){
//         int sum = 0;
//         while(num){
//             sum += num % 10;
//             num /= 10;
//         }
//         num = sum;
//     }
//     return num;
// }

int addDigits(int num){
    int sum = 0;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    if(sum < 10){
        return sum;
    }
    return addDigits(sum);
}
