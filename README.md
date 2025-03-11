# 🌊 Detector de Enchente - Projeto de Automação com Arduino  

**👨‍💻 Autor:** Leonardo Cassiano dos Santos  

**📅 Data:** 22/09/2023  
**🔖 Versão:** 1.0  
---

## 🌟 Funcionalidades  

- **Monitoramento de Nível de Água:** O sensor ultrassônico mede a distância da superfície da água e exibe o valor em centímetros e polegadas no monitor serial.  
- **Indicação Visual de Nível:** Leds indicam diferentes níveis de água:  
  - **Led Verde 1:** Nível de água abaixo de 60 cm.  
  - **Led Verde 2:** Nível de água entre 60 cm e 120 cm.  
  - **Led Amarelo:** Nível de água entre 120 cm e 180 cm.  
  - **Led Laranja:** Nível de água entre 180 cm e 240 cm.  
  - **Led Vermelho:** Nível de água acima de 240 cm.  

---

## 🛠️ Tecnologias Utilizadas  
- **C++:** Linguagem de programação utilizada para desenvolver o código do Arduino.  
- **Arduino IDE:** Ambiente de desenvolvimento para programação do Arduino.  
- **Eletrônica Básica:** Utilização de sensores, leds, resistores e componentes eletrônicos para montagem do circuito.  

---

## 📸 Imagens do Projeto  
![imagem do projeto](https://raw.githubusercontent.com/yLeonardo99/Detector-Enchente/refs/heads/main/Detector%20de%20Enchente.png)

---

## 🔧 Componentes Utilizados  

- 1 Arduino Uno R3  
- 1 Sensor de Distância Ultrassônico  
- 5 Leds (2 Verdes, 2 Amarelos, 1 Vermelho)  
- 5 Resistores  
- 1 Piezo  
- 1 Placa de Ensaio Pequena  
- Jumpers e protoboard para conexões  

---

## 📂 Estrutura do Projeto  
- **DetectorEnchente.ino:** Código-fonte do projeto.  
- **README.md:** Documentação do projeto (este arquivo).  
- **esquema-circuito.png:** Imagem do esquema do circuito.  
- **video-funcionamento:** Vídeo simples do esquema do circuito.  

---

## 🌍 Como Executar o Projeto 

1. **Montagem do Circuito:**
   - Conecte o sensor ultrassônico ao pino digital **7** (trigger) e **6** (echo) do Arduino.  
   - Conecte os leds aos pinos digitais **8**, **5**, **4**, **3**, e **2** do Arduino.  
   - Conecte o piezo ao pino digital **9** do Arduino.  
   - Utilize resistores adequados para cada led.  

2. **Carregar o Código:**  
   - Abra o código DetectorEnchente.ino no Arduino IDE.  
   - Conecte o Arduino ao computador e carregue o código.  

3. **Funcionamento:**  
   - O sensor ultrassônico medirá a distância da superfície da água e exibirá o valor em centímetros e polegadas no monitor serial.  
   - Os leds indicarão o nível de água conforme as faixas definidas.  
   - O piezo emitirá um alerta sonoro caso o nível de água ultrapasse um determinado limite.  

---

## 📝 Considerações Finais  

Este projeto foi desenvolvido com o intuito de monitorar o nível de água em áreas propensas a enchentes, proporcionando uma solução simples e eficaz para alertar sobre possíveis riscos.  

---

## 📄 Licença  

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](https://github.com/seu-usuario/detector-enchente/blob/main/LICENSE) para mais detalhes.  
