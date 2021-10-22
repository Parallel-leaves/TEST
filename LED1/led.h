//R-??
#define LED1_GPIO_PORT GPIOB
#define LED1_GPIO_CLK RCC_APB2Periph_GPIOB
#define LED1_GPIO_PIN GPIO_Pin_5
//G-??
#define LED2_GPIO_PORT GPIOB
#define LED2_GPIO_CLK RCC_APB2Periph_GPIOB
#define LED2_GPIO_PIN GPIO_Pin_0
// B-??
#define LED3_GPIO_PORT GPIOB
#define LED3_GPIO_CLK RCC_APB2Periph_GPIOB
#define LED3_GPIO_PIN GPIO_Pin_1
#define RCC_APB2Periph_AFIO              ((uint32_t)0x00000001)
#define RCC_APB2Periph_GPIOA             ((uint32_t)0x00000004)
#define RCC_APB2Periph_GPIOB             ((uint32_t)0x00000008)
#define RCC_APB2Periph_GPIOC             ((uint32_t)0x00000010)
#define RCC_APB2Periph_GPIOD             ((uint32_t)0x00000020)
#define RCC_APB2Periph_GPIOE             ((uint32_t)0x00000040)
#define RCC_APB2Periph_GPIOF             ((uint32_t)0x00000080)
#define RCC_APB2Periph_GPIOG             ((uint32_t)0x00000100)
#define RCC_APB2Periph_ADC1              ((uint32_t)0x00000200)
#define RCC_APB2Periph_ADC2              ((uint32_t)0x00000400)
#define RCC_APB2Periph_TIM1              ((uint32_t)0x00000800)
#define RCC_APB2Periph_SPI1              ((uint32_t)0x00001000)
#define RCC_APB2Periph_TIM8              ((uint32_t)0x00002000)
#define RCC_APB2Periph_USART1            ((uint32_t)0x00004000)
#define RCC_APB2Periph_ADC3              ((uint32_t)0x00008000)
#define RCC_APB2Periph_TIM15             ((uint32_t)0x00010000)
#define RCC_APB2Periph_TIM16             ((uint32_t)0x00020000)
#define RCC_APB2Periph_TIM17             ((uint32_t)0x00040000)
#define RCC_APB2Periph_TIM9              ((uint32_t)0x00080000)
#define RCC_APB2Periph_TIM10             ((uint32_t)0x00100000)
#define RCC_APB2Periph_TIM11             ((uint32_t)0x00200000)
/* ???????????? IO */
#define digitalHi(p,i) {p->BSRR=i;} //??????
#define digitalLo(p,i) {p->BRR=i;} //?????
#define digitalToggle(p,i) {p->ODR ^=i;} //??????
 /* ???? IO ?? */
#define LED1_TOGGLE digitalToggle(LED1_GPIO_PORT,LED1_GPIO_PIN)
#define LED1_OFF digitalHi(LED1_GPIO_PORT,LED1_GPIO_PIN)
#define LED1_ON digitalLo(LED1_GPIO_PORT,LED1_GPIO_PIN)
#define LED2_TOGGLE digitalToggle(LED2_GPIO_PORT,LED2_GPIO_PIN)
#define LED2_OFF digitalHi(LED2_GPIO_PORT,LED2_GPIO_PIN)
#define LED2_ON digitalLo(LED2_GPIO_PORT,LED2_GPIO_PIN)
#define LED3_TOGGLE digitalToggle(LED2_GPIO_PORT,LED3_GPIO_PIN)
#define LED3_OFF digitalHi(LED2_GPIO_PORT,LED3_GPIO_PIN)
#define LED3_ON digitalLo(LED2_GPIO_PORT,LED3_GPIO_PIN) 
/* ????,???????? PWM ???????,????? */
//?
#define LED_RED \
LED1_ON;\
LED2_OFF\
LED3_OFF
//?
#define LED_GREEN \
LED1_OFF;\
LED2_ON\
LED3_OFF
//?
#define LED_BLUE \
LED1_OFF;\
LED2_OFF\
LED3_ON
//?(?+?)
#define LED_YELLOW \
LED1_ON;\
LED2_ON\
LED3_OFF
//?(?+?)
#define LED_PURPLE \
LED1_ON;\
LED2_OFF\
LED3_ON
//?(?+?)
#define LED_CYAN \
LED1_OFF;\
LED2_ON\
LED3_ON
//?(?+?+?)
#define LED_WHITE \
LED1_ON;\
LED2_ON\
LED3_ON
//?(????)
#define LED_RGBOFF \
LED1_OFF;\
LED2_OFF\
LED3_OFF