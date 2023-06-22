class Solution:
    def numUniqueEmails(self, emails: list[str]) -> int:
        unique = []
        for email in emails:
            at_pos = email.find('@')
            loc = email[:at_pos]
            plus_pos = loc.find('+')
            if plus_pos != -1:
                loc = loc[:plus_pos]
            loc = loc.replace('.', '')
            email = loc[:] + email[at_pos:]

            if email not in unique:
                unique.append(email)
        print(unique)
        return len(unique)
    
# Using str.split()
class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        unique = []
        for email in emails:
            lname, dname = email.split('@')
            lname = lname.split('+')[0]
            lname = lname.replace('.', '')

            email = lname + '@' + dname
            if email not in unique:
                unique.append(email)
                
        print(unique)
        return len(unique)