



const animals = ['ant', 'bison', 'camel', 'duck', 'elephant'];

/**
 * @param begin 索引从0开始，从索引开始处提取原数组元素 
 * @param end 
 * @return 返回被提取元素的新数组
 */

//选取所有元素
console.log(animals.slice())
//从倒数第二个元素开始到最后 
console.log(animals.slice(-2))
//从索引为2开始到最后 
console.log(animals.slice(2));
// begin >= 原数组的长度，返回空数组
console.log(animals.slice(6))
// [2,4)
console.log(animals.slice(2, 4));
// [1,5)
console.log(animals.slice(1, 5));






/**
 * 类数组(Array-like)对象
 */
function list(){
    return Array.prototype.slice.call(arguments)
}

var list1 = list(1,2,3)

console.log(list1)


/**
 * 拷贝规则
 */
const arr = [1, {a: 1, b: 2}, 'abc']

const arr1 = arr.slice(0,2)

arr1[1].a = 23

console.log(arr[1].a)

// 指向同一个地址