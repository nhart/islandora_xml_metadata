<dl xmlns:dcterms="http://purl.org/dc/terms/" class="islandora-inline-metadata islandora-metadata-fields">
  <?php $row_field = 0; ?>
  <?php foreach ($rows as $row): ?>
    <dt class="<?php print $row_field == 0 ? ' first' : ''; ?>">
    <?php print $row['label']; ?>
    </dt>
    <dd class="<?php print $row_field == 0 ? ' first' : ''; ?>">
      <?php print $row['value']; ?>
    </dd>
    <?php $row_field++; ?>
  <?php endforeach; ?>
</dl>