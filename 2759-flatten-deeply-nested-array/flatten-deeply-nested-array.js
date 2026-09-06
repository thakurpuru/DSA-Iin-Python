/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    if(n===0) return arr;
    let curr=[];
    for(let i=0;i<arr.length;i++){
        if(Array.isArray(arr[i])){
            curr.push(...flat(arr[i],n-1));
        }else{
            curr.push(arr[i]);
        }
    }
    return curr;
};