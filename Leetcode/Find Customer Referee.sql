SELECT c1.name as Name
FROM Customer c1
WHERE referee_id <> 2 
OR referee_id IS NULL;
