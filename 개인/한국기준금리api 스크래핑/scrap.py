from selenium import webdriver

driver = webdriver.Chrome('./chromedriver')
# 크롬을 통해서 스크래핑을 진행 크롬 드라이버 로딩
driver.get('https://ecos.bok.or.kr/api/StatisticSearch/WX7EKT2U91BP1LBLTW0E/xml/kr/1/10/098Y001/MM/2021/2022/0101000')
driver.maximize_window()

num = driver.find_element_by_class_name('folder1.folder')
print(num.text)