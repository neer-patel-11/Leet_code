select name as CUSTOMERS from Customers where id not in (select customerID from Orders);