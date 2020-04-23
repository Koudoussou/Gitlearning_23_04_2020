float racine(float n)
{
    float precision = 0.0001;
    float inf = 0;  // on initialise la borne inf a 0
    float sup = n;  // on initialise la borne sup a n
    float tmp = (inf + sup)/2  // on prend le milieu de l'intervalle [inf,sup]
     
    while ( ( tmp * tmp >= n + precision ) || ( tmp * tmp <= n - precision ) )  // tant que tmp² n'appartient pas a [n-precision , n+precision ]
    {
        if (tmp * tmp >= n)  // si tmp² > n
            sup = tmp;  // on reitere la recherche dans l'intervalle [ inf , tmp ]
        else
            inf = tmp;  // sinon on reitere la recherche dans l'intervalle [ tmp , sup ]
         
        tmp = (inf + sup)/2;  // on prend le milieu de ce nouvel intervalle
    }
    return tmp;  // tmp est alors une valeur approché de la racine à + ou - precision
}
