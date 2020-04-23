//Soyons les bienvenus à la formation GitLearning, 
//Je vous souhaites bon courage et bonne continuation

//Un petit code qui permet de calculer la racine carrée d'un nombre

int my_pow(int my_nbr, int pow)
{
    int result = 0;
    while (pow > 0) {
        result = my_nbr * result;
        pow--;
    }
    return (result);
}
 
int my_sqrt(int my_nbr)
{
    int result = 0;
    result = my_pow(my_nbr, (1 /2));
    return (result);
}

//J'espère vous allez en profiter biensûr!!!!//
