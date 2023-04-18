var maximumWealth = function(accounts) {
    let max = -1
    for(let i = 0; i < accounts.length; i++){
        let acc = 0
        for(let j = 0; j < accounts[i].length; j++){
            acc += accounts[i][j]
        }
        if(max < acc){
            max = acc
        }
    }
    return max
};