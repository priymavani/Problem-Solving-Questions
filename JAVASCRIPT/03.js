//3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene
function triangleis( tr1,tr2,tr3){
    if(tr1==tr2 && tr2==tr3){
        console.log("equilateral");
    }
    else if(tr1==tr2 || tr1==tr3 || tr2==tr3){
        console.log("isoscales");
    }
    else{
        console.log("scalene");
    }
}
triangleis(60,60,40);
