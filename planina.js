solve(1, 9);
solve(2, 25);
solve(5, 1089);

function solve(n, expected){
    let subSquares = 4;

    for (var i = 1; i < n+1; i++) {
        if(n == i) {
            console.log(((Math.sqrt(subSquares)+1)**2) == expected);
            return;
        }
        subSquares *= 4;
    }
}
