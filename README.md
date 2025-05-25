# 🔧 Solução IoT para Monitoramento Inteligente de Motocicletas – Mottu

## 🎯 Objetivo do Projeto
Apresentamos uma solução de monitoramento inteligente para motocicletas, desenvolvida para atender as necessidades operacionais da empresa Mottu.

Este sistema permite acompanhar, em tempo real, o status e a localização das motos em diferentes setores da empresa, utilizando sensores físicos integrados a um Arduino e um LED RGB, que sinaliza de forma visual e imediata o estado de cada motocicleta.

## ⚙️ Funcionamento do Sistema
O sistema é composto por 3 sensores de presença, instalados em pontos estratégicos:

🏍️ Pátio de Operações

🔧 Área de Manutenção

⛔ Área de Moto Sem Operação

✔️ Quando uma motocicleta é detectada em algum desses setores, o LED RGB sinaliza automaticamente a condição atual da moto por meio de uma cor específica.
Se nenhum sensor detectar presença, o sistema entra em estado neutro, indicado por uma cor diferente.

## 🧠 Lógica de Funcionamento (Software)
O código foi desenvolvido em C/C++, no formato .ino, utilizando a IDE do Arduino.

Utiliza uma função dedicada chamada setColor(), responsável por definir a cor do LED RGB conforme o estado identificado.

O programa lê continuamente os dados dos 3 sensores de presença e altera a cor do LED de acordo com a situação da motocicleta.

## 📋 Guia Rápido de Implementação
Acesse o Tinkercad.

Monte o circuito com:

✔️ 3 sensores de presença (ou botões, para simulação)

✔️ 1 LED RGB cátodo comum

✔️ Resistores e jumpers, conforme necessidade do circuito

Carregue no Arduino o código disponibilizado no arquivo codigoMottu.ino.

Teste o sistema acionando os sensores para observar o LED mudando de cor conforme o status da moto.

## 🎨 Tabela de Cores – Status das Motos
Status da Motocicleta	Cor Indicada no LED	Descrição
🏍️ No Pátio	🟩 Verde	Moto pronta para operação
🔧 Em Manutenção	🟨 Amarelo	Moto passando por manutenção
⛔ Sem Operação	🟥 Vermelho	Moto inativa ou fora de uso
🚫 Nenhuma Moto Detectada	🟦 Azul	Estado neutro (sem detecção)

## ✅ Resultados Obtidos
🔸 Simulação 100% funcional no ambiente do Tinkercad.

🔸 O LED RGB responde corretamente às entradas de cada sensor.

🔸 Circuito validado e operacional, cumprindo todos os requisitos propostos.

🏁 Considerações Finais
Esta solução foi desenvolvida como um projeto acadêmico, aplicando conceitos de IoT (Internet das Coisas) para resolver problemas reais da indústria, proporcionando controle, agilidade e eficiência no gerenciamento de frotas de motocicletas.

### 📄 Projeto disponível para demonstração e customização conforme necessidade do cliente.
