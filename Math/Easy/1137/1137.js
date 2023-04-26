/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function(n) {
    if(n < 2){
        return n
    }
    let i = 0
    let j = 1
    let k = 1
    let l = 0;
    for(let idx = 0; idx < n - 2; idx++){
        l = i + j + k
        i = j
        j = k
        k = l
    }
    return k
};