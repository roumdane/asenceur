# objectif de mon projet

dans ce projet, nous allons concevoir un projet utillisant la carte arduino (UCA)  et un servomoteur pour decender et monter la cabine de l'asenseur ,ce projet vise à réaliser un principe de un asenseur qui aide nous de voir un idées à l'ascenseur réel .

# contexte

nous avons réalisé un ascenseur  qui utiliser l'ordre d'après les gens avec les bouton poussoir 
une cabine dans une mouvement verticale à l'aide du servomoteur.

# principe du projet

on vas crée un système ascenseur qui utiliser un servomoteur les ultrasons sont utilisés pour aider les gens pour monter et descendre  surtout pour les handicapés et les vieilles gens dans une périodes rapide , le mouvement du cabine est contrôlé à l'aide de servomoteur et les boutons avec eux en peut appelé la cabine et à chaque appuie sur les boutons avec l'aide des logiciels arduino il nous affiche sur l'écrans de l'ordinateur la cabine dans quelle étage et sa détection et l'arrive

# fabrication
## composants nécessaires 
1 * carte arduino (UCA)
2 * servomoteur 
3 * des boutons 
4 * des résistances 
5 * des fils électriques 
## montage 
pour le montage on a connecté  :
### pour le servo moteur 
1 * fil rouge: fil de l'alimentation à relier v-bus(8)
2 * fil  marron : fil à relier à la broche GND de l'arduino 
3 * fil jaune : fil de signale de positionnement branché à la broche N°10 de l'arduino 
### les trois boutons 
exmple pour une buton =>

![layout](https://github.com/roumdane/asenceur/assets/134685007/b2c0fcb4-93e0-4db2-9e14-0db24bc0450a)

 la déférence juste à les broches de les boutons à l'arduino 
 
 
 ![image de la circuit de projet](https://github.com/roumdane/asenceur/assets/134685007/137ddb2e-a740-4e73-884f-a0e611edbcb6)

le image celui ci-dessus c'est le branchement de les boutons avec l'arduino 
## arduino 
ce programme permet de nous donne la cabine dans quelle étage , sa derection et l'arrive cad dans quelle étage arrive la cabine et faire tourner le servomoteur avec des valeur précise de la distance de monter et descendre avec aussi nous permettre de réglé le temps

## résultats

avec un cable USB on branche la carte UCA à un ordinateur et mon lui transmet le code pour arduino après cette étape le servomoteur se met a tourner avec les boustons poussoir et on observe les résultats sur l'éran de l'ordinateur 
on vois que la cabine se met à boujer quand on appuie sur un de les boutons 
## conclusions et perspectives 
l'objectif principale de ce projet était concevoir et de mettre en oeuvre un systéme principe de  ascenseur . le princepe de ce système est de nous donne une aperçu de un ascenseur réelle  .l'asenceur utiliser pour faciliter la mouvement .




