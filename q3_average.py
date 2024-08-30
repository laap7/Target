import json

with open('data.json', 'r') as file:
    data = json.load(file)

non_zero_values = []

for value in data.values():
    if value != 0:
        non_zero_values.append(value)

non_zero_values.sort()
print(non_zero_values[0])
print(non_zero_values[-1])
avr = sum(non_zero_values)/len(non_zero_values)
counter = 0
for i in non_zero_values:
    if i > avr:
        counter += 1
print(counter)
