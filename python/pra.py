import time
from typing import List



def f1(list_of_list):
    result = []
    for inner_list in list_of_list:
        for x in inner_list:
            if x not in result:
                result.append(x)
    return result

def f2(list_of_list):
    flat_list = []
    for inner_list in list_of_list:
        flat_list.extend(inner_list)
    return [
        x for i, x in enumerate(flat_list)
        if flat_list.index(x) == i]

def f3(list_of_list):
    result = []
    seen = set()
    for inner_list in list_of_list:
        for x in inner_list:
            if x not in seen:
                result.append(x)
                seen.add(x)
    return result





start_time = time.time() # 측정 시작

a = [[1, 2], [3, 4], [1,2],[4,23],[3,4],[23,2],[3333,1],[23,0]]
print(f3(a))

#프로그램 소스코드
end_time = time.time() # 측정 종료
print("time : ", end_time - start_time) # 수행 시간 출력