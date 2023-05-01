double average(int* salary, int salarySize){
    double sum = 0.;
    double max = salary[0];
    double min = salary[0];
    for(int i = 0; i < salarySize; i++){
        if(salary[i] > max){
            max = salary[i];
        }else if(salary[i] < min){
            min = salary[i];
        }
        sum += salary[i];
    }
    sum = sum - min - max;
    return sum / (salarySize - 2);
}