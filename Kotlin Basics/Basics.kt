package com.onurelhakan.kotlinbasics

fun main() {

    //immutable
    val myName = "Onur"

    //mutable
    var name = "Fatih"

    val myByte: Byte = 13
    val myShort: Short = 125
    val myInt: Int = 123123123
    val myLong: Long = 39_812_512_321_512

    val myFloat: Float = 13.37F
    val myDouble: Double = 13.52346324616264

    val myBoolean: Boolean = false

    val myChar: Char = 'a'

    val myString: String = "Hello, World!"
    val firstCharInString = myString[0]
    val lastCharInString = myString[myString.length - 1]
    println("First character is : $firstCharInString , last character is : $lastCharInString, length of string is : ${myString.length}")

    val age = 16
    val drivingAge = 18
    //Assign the if statement to a variable
    val currentAge = if (age >= drivingAge) {
        drivingAge
    } else {
        age
    }
    println(currentAge)

    val season = 3
    when (season) {
        1 -> println("spring")
        2 -> println("summer")
        3 -> println("fall")
        4 -> println("winter")
        else -> println("invalid")
    }

    val month = 7
    when (month) {
        in 3..5 -> println("spring")
        in 6..8 -> println("summer")
        in 9..11 -> println("fall")
        12, 1, 2 -> println("winter")
        else -> println("invalid")
    }

    val x: Any = 13.37F
    when (x) {
        x is Int -> print("Integer")
        x is String -> print("String")
        x is Double -> print("double")
        else -> print("idk")
    }

    val result = when (x) {
        is Int -> "is an Int"
        !is Double -> "is not Double"
        is String -> "is a String"
        else -> "is none of the above"
    }

    for (num in 1..10) {
        print(num)
    }

    for (num in 1 until 10) {
        print(num)
    }

    for (num in 10 downTo 1 step 2) {
        print(num)
    }

    //break - get out of the whole loop
    //continue - get out of the current iteration

    myFunction()

    //argument
    println(avg(1.236, 27.526126))

    var name2: String = "test"
    //name = null -> compilation error
    var nullableName: String? = "Onur"
    var len = name2.length
    var len2 = nullableName?.length
    nullableName?.let { println(it.length) }
    nullableName = null

    val name3 = nullableName ?: "Guest"

    println(name3)

    //println(nullableName!!.toLowerCase())

    //val wifesAge : String = user?.wife?.age ?: 0

    var onur = Person("Onur", "Elhakan")
    var default = Person()
    var onlyLastName = Person(lastName = "Peterson")
    onur.hobby = "Football"
    onur.stateHobby()

    var secondaryConstructorPerson = Person("Victor", "Nelsson", 27)

    var myCar = Car("onur", "bmw", 140)
    //myCar.owner
    println("Brand is : ${myCar.brand}")
    //myCar.maxSpeed = -1
    //myCar.model = "M3"

    val user1 = User(1, "Onur")
    val user2 = User(2, "Pellegrini")
    println(user1.equals(user2))
    println("User Details : $user1")
    val updatedUser = user1.copy(name = "TEST")
    println(updatedUser.component1())
    println(updatedUser.component2())
    val (idx, namex) = updatedUser

    val numList: List<Int> = listOf(1, 2, 3, 4, 5)
    val mixedList: List<Any> = listOf(1, 2, "three", "four")

    val obj1: Any = "I have a dream" //automaticlly cast to a string

    //explicit/unsafe casting
    val str1: String = obj1 as String
    val obj2: Any = 1241
    //val str2 : String = obj2 as String
    //println(str2)

    //explicit/safe casting
    val str3: String? = obj2 as? String //works
    println(str3) //prints null

    //val numbers : IntArray = intArrayOf(1,2,3,4,5,6)
    //val numbers = intArrayOf(1,2,3,4,5,6)
    val numbers = arrayOf(1, 2, 3, 4, 5, 6)
    println(numbers.contentToString())
    for (element in numbers) {
        println(element)
    }
    val mix = arrayOf("mon", "tue", "wed", "thu", 5, 6, "sun")
    val fruits = arrayOf(Fruit("Apple", 5.0), Fruit("Banana", 7.0))
    for (index in fruits.indices) {
        println(fruits[index].name)
    }
    println(mix.contentToString())

    val months = listOf("jan", "feb", "mar")
    val anyTypes = listOf(1, 2, 3, "test", false)
    println(anyTypes.size)
    println(months[2])

    val nums = mutableListOf<Int>(1, 2, 3, 4, 5)
    nums.add(6)
    nums.removeAt(3)
    val removeList = mutableListOf<Int>(1, 2)
    nums.removeAll(removeList)
    nums.removeAll(nums)

    val fruitNames = setOf("orange", "apple", "grape", "apple")
    println(fruitNames.size)
    println(fruitNames.toSortedSet())

    val daysOfWeek = mapOf(1 to "Monday", 2 to "Tuesday")
    println(daysOfWeek[2])
    for (key in daysOfWeek.keys) {
        println("$key ${daysOfWeek[key]}")
    }

    // to make changes to maps, lists or sets use toMutable
    val newDaysOfWeek = daysOfWeek.toMutableMap()
    newDaysOfWeek[3] = "Wednesday"
    println(newDaysOfWeek.toSortedMap())

    val sum: (Int, Int) -> Int = { a: Int, b: Int -> a + b }
    println(sum(3,5))
    val shortSum = { a: Int, b: Int -> println(a + b) }
    shortSum(3,5)
}

data class Fruit(val name: String, val price: Double)

fun myFunction() {
    println("you called myfunction")
}

//parameter
fun avg(a: Double, b: Double): Double {
    return (a + b) / 2
}

//Method : function within a class

class Person(firstName: String = "Fatih", lastName: String = "Terim") {

    //Member variables/properties
    var age: Int? = null
    var hobby: String = "Netflix"
    var firstName: String? = null

    //Initializer block
    init {
        this.firstName = firstName
        println("Person Created! FN : $firstName LN : $lastName")
    }

    //Member constructor
    constructor(firstName: String, lastName: String, age: Int)
            : this(firstName, lastName) {
        this.age = age
        println("Person Created! FN : $firstName LN : $lastName AGE : $age")
    }

    //Member functions/methods
    fun stateHobby() {
        println("${firstName}\'s hobby is $hobby")
    }
}

data class User(val id: Long, var name: String)

interface Drivable {
    val maxSpeed: Int
}

open class Vehicle(owner: String, brand: String, override val maxSpeed: Int) : Drivable {

}

open class Car(owner: String, brand: String, maxSpeed: Int) : Vehicle(owner, brand, maxSpeed) {
    //use open to allow overriding member functions or properties
    // not necessary in interface

    // abstract methods/properties in abstract classes should all be implemented by subclasses
    // this is not the case for abstract methods/properties
    lateinit var owner: String
    val brand: String = "BMW"
        get() {
            return field.lowercase()
        }
    var model: String = "M5"
        private set

    init {
        this.model = "M5"
    }
}

class ElectricCar(owner: String, brand: String, batteryLife: Double, maxSpeed: Int) :
    Car(owner, brand, maxSpeed) {

}