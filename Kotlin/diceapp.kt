fun main(){
    val myFirstDice= dice()
    println(myFirstDice)
    myFirstDice.roll()

}
class dice{
    var sides=6
    fun roll(){
        val randomeNumber=(1..6).random()
        println(randomeNumber)
    }
}