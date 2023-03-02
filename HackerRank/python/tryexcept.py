try:
    hours = int(input('Enter hours: '))
    rate = int(input('Enter rate: '))
except:
    print("Error, please enter numeric input.")
    quit()
    
print("Pay:", hours * rate)