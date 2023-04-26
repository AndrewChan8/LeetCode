/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    if(n < 2){
        return n
    }
    let i = 0
    let j = 1
    let k = 0
    for(let idx = 0; idx < n - 1; idx++){
        k = i + j
        i = j
        j = k
    }
    return j
};