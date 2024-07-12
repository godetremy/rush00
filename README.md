# rush00
## 🌈 Intro
```
l => 12
12%5 => 2
//rush02
```
## 📄 Sujet
## Intro
> Dossier de rendu : ex00/
>
> Fichier à rendre :
> -  main.c
> -  ft_putchar.c
> -  rush02.c
> 
> Fonctions Autorisées : write

Les fichiers à rendre seront le main.c, un ft_putchar.c et votre rush0X.c, où 0X correspondra au numéro du rush. Par exemple, rush00.c.

Exemple de main.c :
```c
int main()
{
  rush(5, 5);
  return (0);
}
```

Vous devrez donc écrire la fonction rush prenant en paramètre deux variables de type entier nommées respectivement x et y.


Votre fonction rush devra afficher à l’écran un rectangle de x caractères de largeur, et y caractères de hauteur.

Votre fonction ne devrait jamais planter ou entrer dans une boucle infinie.

Votre main sera modifié en soutenance pour pouvoir changer les paramètres de l’appel à la fonction rush. Par exemple, ce genre de chose sera testé :
```c
int main()
{
  rush(123, 42);
  return (0);
}
```

### rush02
• rush(5,3) affichera ceci :
```
$>./a.out
ABBBA
B   B
CBBBC
$>
```
• rush(5, 1) ceci :
```
$>./a.out
ABBBA
$>
```
• rush(1, 1) ceci :
```
$>./a.out
A
$>
```
• rush(1, 5) ceci :
```
$>./a.out
A
B
B
B
C
$>
```
• rush(4, 4) ceci :
```
$>./a.out
ABBA
B  B
B  B
CBBC
$>
```

## 💡 Tips
- Utiliser la norminette
