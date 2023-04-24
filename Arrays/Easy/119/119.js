// Recursive method O(n^2)
var getRow1 = function(rowIndex) {
    let row = [1];
    if(rowIndex == 0){
        return row;
    }
    prevRow = getRow1(rowIndex - 1);
    for(let i = 1; i < prevRow.length; i++){
        curr = prevRow[i - 1] + prevRow[i];
        row.push(curr)
    }
    row.push(1);
    return row;
};

var getRow = function(rowIndex) {
    let row = new Array(rowIndex + 1);
    row[0] = 1;
    row[rowIndex] = 1;
    for(let i = 1, up = rowIndex; i < rowIndex; i++, up--){
        row[i] = row[i - 1] * up / i;
    }
    return row;
};