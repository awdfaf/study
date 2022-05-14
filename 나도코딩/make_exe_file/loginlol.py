from selenium import webdriver
from selenium import webdriver
import sys, os

if  getattr(sys, 'frozen', False): 
    chromedriver_path = os.path.join(sys._MEIPASS, "chromedriver.exe")
    driver = webdriver.Chrome(chromedriver_path)
else:
    driver = webdriver.Chrome()
driver = webdriver.Chrome('./chromedriver')
# 크롬을 통해서 스크래핑을 진행 크롬 드라이버 로딩
driver.get('https://www.leagueoflegends.com/ko-kr/')
driver.maximize_window()


loginButton = driver.find_element_by_xpath(
    '//*[@id="riotbar-right-content"]/div[3]/div[1]/a')
loginButton.click()

username = driver.find_element_by_name('username')
password = driver.find_element_by_name('password')

username.send_keys('test')
password.send_keys('test')

enterbtn = driver.find_element_by_xpath('/html/body/div[2]/div/div/div[2]/div/div/button')
enterbtn.click()