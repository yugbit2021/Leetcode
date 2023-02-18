# Leetcode
language: python
python:
  - "3.7"
install:
  - pip install -r requirements.txt
script: 
  - python -m pytest  --cov-report term --cov=app
after_success:
  - codecov
  
  
| # | Title | Difficulty | link |
| :---         |     :---:      |    :---:      | ---: |
| 1   | Roman to Integer    | Easy    | https://leetcode.com/problems/roman-to-integer |

