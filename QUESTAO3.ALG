Algoritmo "questao3"

Var
   tipoConsumidor: caractere
   idConsumidor, qteKwh, i, n: inteiro
   precoPagar, precoR, precoC,precoI,totalR, totalC, totalI: real

Inicio

   totalR <- 0
   totalC <- 0
   totalI <- 0
   precoPagar <-0
   repita
      escreva("Digite o preço do Kwh(R): R$ ")
      leia(precoR)
   ate(precoR >0)

   repita
      escreva("Digite o preço do Kwh(C): R$ ")
      leia(precoC)
   ate(precoC >0)

   repita
      escreva("Digite o preço do Kwh(I): R$ ")
      leia(precoI)
   ate(precoI >0)

   repita
      escreva("Digite a quantidade consumidores: ")
      leia(n)
   ate(n >0)

   para i de 1 ate n faca
      repita
         escreva("Número da unidade consumidora: ")
         leia(idConsumidor)
      ate(idConsumidor>0)
      repita
         escreva("Quantidade de Kwh consumidos: ")
         leia(qteKwh)
      ate(qteKwh >0)
      repita
         escreva("Tipo de Consumidor: R, C ou I: ")
         leia(tipoConsumidor)
      ate(maiusc(tipoConsumidor)="R")ou (maiusc(tipoConsumidor)="C") ou (maiusc(tipoConsumidor)="I")


      tipoConsumidor <- maiusc(tipoConsumidor)

      se (tipoConsumidor="R") entao
         totalR <- totalR + qteKwh
         precoPagar <- qteKwh*precoR
      senao
         se (tipoConsumidor="C") entao
            totalC <- totalC + qteKwh
            precoPagar <- qteKwh*precoC
         senao
            totalI <- totalI + qteKwh
            precoPagar <- qteKwh*precoI
         fimSe
      fimSe
      
      escreval("Id Consumidor: ", idConsumidor)
      escreval("Total a pagar: R$ ",precoPagar:5:2)

   fimPara

   escreval("Total de Kwh: Consumidor R: ", totalR)
   escreval("Total de Kwh: Consumidor C: ", totalC)
   escreval("Total de Kwh: Consumidor I: ", totalI)


Fimalgoritmo