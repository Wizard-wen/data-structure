

/**
 * 从一个类似数组或可迭代对象创建一个新的，浅拷贝的数组实例
 */
/**
 * @param arrayLike
 * @param mapFn 
 * @param thisArg 执行回调函数mapFn时this对象
 */

/**
 * 伪数组对象 - 拥有一个length属性和若干索引属性都得任意对象
 * 可迭代对象 - 可以获取对象中的元素
 */
Array.from('foo');



Array.from([1,2,3], x => x + x)