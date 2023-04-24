/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
    let i = 1
    while(i < n){
        i *= 4
    }
    return i == n
};