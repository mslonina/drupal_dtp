<?php print '<?xml version="1.0" encoding="UTF-8" ?>';?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title></title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
</head>
<body>
<?php foreach ($themed_rows as $count => $row): ?>
<?php foreach ($row as $field => $content): ?>
  <?php print $content; ?>
<?php endforeach; ?>
<?php endforeach; ?>
</body>
</html>
