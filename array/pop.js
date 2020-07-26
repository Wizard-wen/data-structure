


/**
 * 从数组中删除最后一个元素，并返回该元素的值
 * @return 最后一个元素
 * 此方法会产生副作用
 * 可以应用在类数组上
 * 空数组上调用pop会返回undefined
 * 这个方法根据length属性来确定最后一个元素的位置，如果没有length属性，或者length属性不能转换为数值，将length置0，返回
 */
const plants = ['broccoli', 'cauliflower', 'cabbage', 'kale', 'tomato'];

// 返回值不是数组，是一个单独的元素
console.log(plants.pop());

console.log(plants)
