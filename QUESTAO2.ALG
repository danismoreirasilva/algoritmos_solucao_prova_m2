Algoritmo "questao2"

Var
   limite, peso, pesoTotal: real
   opcao: caractere
   i: inteiro

Inicio
   pesoTotal <- 0
   repita
      escreva("Digite o valor do limite diário em Kg: ")
      leia(limite)
   ate (limite > 0)

   repita
      escreva("Digite o valor do peso do peixe: ")
      leia(peso)
      peso <- peso/1000;
      pesoTotal <- pesoTotal + peso
      escrevaL("O peso total é : ",pesoTotal )
      se (pesoTotal < limite) entao
         escreva("Mais um peixe: S ou N: ")
         leia(opcao)
      senao
           escreva("Limite diário excedido! ")
           opcao <- "N"
      fimSe
   ate(maiusc(opcao)="N")

Fimalgoritmo

